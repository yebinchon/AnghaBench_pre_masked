
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct autofs_wait_queue {size_t len; int name; int wait_queue_token; } ;
struct autofs_sb_info {int pipe; } ;
struct TYPE_2__ {int type; int proto_version; } ;
struct autofs_packet_missing {size_t len; char* name; int wait_queue_token; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct autofs_sb_info*) ;
 int VAR_1 ;
 int FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (int ,struct autofs_packet_missing*,int) ;
 int FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (struct autofs_packet_missing*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct autofs_sb_info *VAR_2, struct autofs_wait_queue *VAR_3)
{
 struct autofs_packet_missing VAR_4;

 FUNC_0(("autofs_wait: wait id = 0x%08lx, name = ", VAR_3->wait_queue_token));
 FUNC_2(VAR_3->name,VAR_3->len);

 FUNC_5(&VAR_4,0,sizeof VAR_4);

 VAR_4.hdr.proto_version = VAR_0;
 VAR_4.hdr.type = VAR_1;
 VAR_4.wait_queue_token = VAR_3->wait_queue_token;
 VAR_4.len = VAR_3->len;
        FUNC_4(VAR_4.name, VAR_3->name, VAR_4.len);
 VAR_4.name[VAR_4.len] = '\0';

 if ( FUNC_3(VAR_2->pipe,&VAR_4,sizeof(struct autofs_packet_missing)) )
  FUNC_1(VAR_2);
}
