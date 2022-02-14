
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ssl_data {size_t tls_out_pos; size_t tls_out_limit; int * tls_out; int conn; TYPE_1__* eap; scalar_t__ include_tls_length; } ;
struct TYPE_2__ {int ssl_ctx; } ;
typedef scalar_t__ EapType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct eap_ssl_data*) ;
 struct wpabuf* FUNC_1 (scalar_t__,int,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,unsigned long,...) ;
 scalar_t__ FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 int* FUNC_7 (struct wpabuf*,int) ;
 int FUNC_8 (struct wpabuf*,size_t) ;
 int FUNC_9 (struct wpabuf*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_10(struct eap_ssl_data *VAR_5, EapType VAR_6,
      int VAR_7, u8 VAR_8, int VAR_9,
      struct wpabuf **VAR_10)
{
 size_t VAR_11;
 u8 *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_5->tls_out == ((void*)0))
  return -1;
 VAR_11 = FUNC_6(VAR_5->tls_out) - VAR_5->tls_out_pos;
 FUNC_4(VAR_4, "SSL: %lu bytes left to be sent out (of total "
     "%lu bytes)",
     (unsigned long) VAR_11,
     (unsigned long) FUNC_6(VAR_5->tls_out));





 if (VAR_11 > VAR_5->tls_out_limit) {
  VAR_13 = 1;
  VAR_11 = VAR_5->tls_out_limit;
  FUNC_4(VAR_4, "SSL: sending %lu bytes, more fragments "
      "will follow", (unsigned long) VAR_11);
 } else
  VAR_13 = 0;

 VAR_14 = VAR_5->tls_out_pos == 0 &&
  (FUNC_6(VAR_5->tls_out) > VAR_5->tls_out_limit ||
   VAR_5->include_tls_length);
 if (!VAR_14 &&
     VAR_6 == VAR_3 && VAR_7 == 0 &&
     !FUNC_3(VAR_5->eap->ssl_ctx, VAR_5->conn)) {






  VAR_14 = 1;
 }

 *VAR_10 = FUNC_1(VAR_6, 1 + VAR_14 * 4 + VAR_11,
          VAR_0, VAR_8);
 if (*VAR_10 == ((void*)0)) {
     FUNC_2("[Debug] out_data is null, return \n");
  return -1;
    }

 VAR_12 = FUNC_7(*VAR_10, 1);
 *VAR_12 = VAR_7;
 if (VAR_13)
  *VAR_12 |= VAR_2;
 if (VAR_14) {
  *VAR_12 |= VAR_1;
  FUNC_8(*VAR_10, FUNC_6(VAR_5->tls_out));
 }
 FUNC_9(*VAR_10,
   FUNC_5(VAR_5->tls_out) + VAR_5->tls_out_pos,
   VAR_11);
 VAR_5->tls_out_pos += VAR_11;

 if (!VAR_13)
  FUNC_0(VAR_5);

 return VAR_9;
}
