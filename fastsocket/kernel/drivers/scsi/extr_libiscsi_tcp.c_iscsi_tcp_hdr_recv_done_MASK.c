
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct iscsi_hdr* hdr; scalar_t__ hdr_buf; } ;
struct iscsi_tcp_conn {TYPE_3__ in; int rx_hash; struct iscsi_conn* iscsi_conn; } ;
struct iscsi_segment {int copied; unsigned int total_size; unsigned int size; scalar_t__ digest_len; int digest; scalar_t__ total_copied; int recv_digest; } ;
struct iscsi_hdr {int hlength; } ;
struct iscsi_conn {TYPE_2__* session; scalar_t__ hdrdgst_en; } ;
struct TYPE_5__ {TYPE_1__* tt; } ;
struct TYPE_4__ {int caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct iscsi_hdr*,scalar_t__,int ) ;
 int FUNC_1 (struct iscsi_tcp_conn*,struct iscsi_segment*) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_hdr*) ;
 int FUNC_3 (struct iscsi_segment*,int ) ;

__attribute__((used)) static int
FUNC_4(struct iscsi_tcp_conn *VAR_4,
   struct iscsi_segment *VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_4->iscsi_conn;
 struct iscsi_hdr *VAR_7;





 VAR_7 = (struct iscsi_hdr *) VAR_4->in.hdr_buf;
 if (VAR_5->copied == sizeof(struct iscsi_hdr) && VAR_7->hlength) {



  unsigned int VAR_8 = VAR_7->hlength << 2;


  if (sizeof(*VAR_7) + VAR_8 > sizeof(VAR_4->in.hdr_buf))
   return VAR_2;

  VAR_5->total_size += VAR_8;
  VAR_5->size += VAR_8;
  return 0;
 }




 if (VAR_6->hdrdgst_en &&
     !(VAR_6->session->tt->caps & VAR_0)) {
  if (VAR_5->digest_len == 0) {





   FUNC_3(VAR_5,
       VAR_5->recv_digest);
   return 0;
  }

  FUNC_0(VAR_4->rx_hash, VAR_7,
          VAR_5->total_copied - VAR_1,
          VAR_5->digest);

  if (!FUNC_1(VAR_4, VAR_5))
   return VAR_3;
 }

 VAR_4->in.hdr = VAR_7;
 return FUNC_2(VAR_6, VAR_7);
}
