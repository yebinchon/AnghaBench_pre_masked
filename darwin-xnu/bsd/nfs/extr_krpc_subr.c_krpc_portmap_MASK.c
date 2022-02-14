
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef void* u_int16_t ;
typedef int u_int ;
struct sockaddr_in {void* sin_port; } ;
typedef int mbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr_in*,int ,scalar_t__,int ,int ,int *,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

int
FUNC_9(
 struct sockaddr_in *VAR_8,
 u_int VAR_9, u_int VAR_10, u_int VAR_11,
 u_int16_t *VAR_12)
{
 struct sdata {
  u_int32_t prog;
  u_int32_t vers;
  u_int32_t proto;
  u_int32_t port;
 } *VAR_13;
 struct rdata {
  u_int16_t pad;
  u_int16_t port;
 } *VAR_14;
 mbuf_t VAR_15;
 int VAR_16;


 if (VAR_9 == VAR_5) {
  *VAR_12 = FUNC_1(VAR_3);
  return 0;
 }

 VAR_16 = FUNC_5(VAR_2, VAR_1, &VAR_15);
 if (VAR_16)
  return VAR_16;
 FUNC_8(VAR_15, sizeof(*VAR_13));
 FUNC_7(VAR_15, sizeof(*VAR_13));
 VAR_13 = FUNC_3(VAR_15);


 VAR_13->prog = FUNC_0(VAR_9);
 VAR_13->vers = FUNC_0(VAR_10);
 VAR_13->proto = FUNC_0(VAR_11);
 VAR_13->port = 0;

 VAR_8->sin_port = FUNC_1(VAR_3);
 VAR_16 = FUNC_2(VAR_8, VAR_7, VAR_5, VAR_6, VAR_4, &VAR_15, ((void*)0));
 if (VAR_16)
  return VAR_16;

 VAR_14 = FUNC_3(VAR_15);

 if (FUNC_6(VAR_15) >= sizeof(*VAR_14)) {
  *VAR_12 = VAR_14->port;
 }

 if (FUNC_6(VAR_15) < sizeof(*VAR_14) || !VAR_14->port)
  VAR_16 = VAR_0;

 FUNC_4(VAR_15);
 return (VAR_16);
}
