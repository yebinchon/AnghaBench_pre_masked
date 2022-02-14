
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ssl_data {unsigned int tls_in_left; unsigned int tls_in_total; int * tls_in; int ssl_ctx; } ;
struct eap_sm {int workaround; } ;
struct eap_method_ret {void* allowNotifications; int decision; int methodState; void* ignore; } ;
typedef scalar_t__ EapType ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 unsigned int FUNC_0 (int const*) ;
 int* FUNC_1 (int ,scalar_t__,struct wpabuf const*,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct wpabuf const*) ;

const u8 * FUNC_6(struct eap_sm *VAR_11,
         struct eap_ssl_data *VAR_12,
         EapType VAR_13,
         struct eap_method_ret *VAR_14,
         const struct wpabuf *VAR_15,
         size_t *VAR_16, u8 *VAR_17)
{
 const u8 *VAR_18;
 size_t VAR_19;
 unsigned int VAR_20;

 if (FUNC_2(VAR_12->ssl_ctx)) {
  FUNC_3(VAR_9, "SSL: TLS errors detected");
  VAR_14->ignore = VAR_10;
  return ((void*)0);
 }

 if (VAR_13 == VAR_2)
  VAR_18 = FUNC_1(VAR_5,
           VAR_4, VAR_15,
           &VAR_19);
 else
  VAR_18 = FUNC_1(VAR_3, VAR_13, VAR_15,
           &VAR_19);
 if (VAR_18 == ((void*)0)) {
  VAR_14->ignore = VAR_10;
  return ((void*)0);
 }
 if (VAR_19 == 0) {
  FUNC_3(VAR_8, "SSL: Invalid TLS message: no Flags "
      "octet included");
  if (!VAR_11->workaround) {
   VAR_14->ignore = VAR_10;
   return ((void*)0);
  }

  FUNC_3(VAR_8, "SSL: Workaround - assume no Flags "
      "indicates ACK frame");
  *VAR_17 = 0;
 } else {
  *VAR_17 = *VAR_18++;
  VAR_19--;
 }
 FUNC_3(VAR_8, "SSL: Received packet(len=%lu) - "
     "Flags 0x%02x", (unsigned long) FUNC_5(VAR_15),
     *VAR_17);
 if (*VAR_17 & VAR_1) {
  if (VAR_19 < 4) {
   FUNC_3(VAR_9, "SSL: Short frame with TLS "
       "length");
   VAR_14->ignore = VAR_10;
   return ((void*)0);
  }
  VAR_20 = FUNC_0(VAR_18);
  FUNC_3(VAR_8, "SSL: TLS Message Length: %d",
      VAR_20);
  if (VAR_12->tls_in_left == 0) {
   VAR_12->tls_in_total = VAR_20;
   VAR_12->tls_in_left = VAR_20;
   FUNC_4(VAR_12->tls_in);
   VAR_12->tls_in = ((void*)0);
  }
  VAR_18 += 4;
  VAR_19 -= 4;

  if (VAR_19 > VAR_20) {
   FUNC_3(VAR_9, "SSL: TLS Message Length (%d "
       "bytes) smaller than this fragment (%d "
       "bytes)", (int) VAR_20, (int) VAR_19);
   VAR_14->ignore = VAR_10;
   return ((void*)0);
  }
 }

 VAR_14->ignore = VAR_6;
 VAR_14->methodState = VAR_7;
 VAR_14->decision = VAR_0;
 VAR_14->allowNotifications = VAR_10;

 *VAR_16 = VAR_19;
 return VAR_18;
}
