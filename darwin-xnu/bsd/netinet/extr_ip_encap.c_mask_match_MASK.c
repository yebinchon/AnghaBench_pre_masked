
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sockaddr_storage {int ss_len; scalar_t__ ss_family; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;
struct TYPE_2__ {int ss_len; } ;
struct encaptab {scalar_t__ af; TYPE_1__ dst; TYPE_1__ src; int dstmask; int srcmask; } ;
typedef int s ;
typedef int d ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1(const struct encaptab *VAR_0, const struct sockaddr *VAR_1,
 const struct sockaddr *VAR_2)
{
 struct sockaddr_storage VAR_3;
 struct sockaddr_storage VAR_4;
 int VAR_5;
 const u_int8_t *VAR_6, *VAR_7;
 u_int8_t *VAR_8;
 int VAR_9;

 if (VAR_1->sa_len > sizeof(VAR_3) || VAR_2->sa_len > sizeof(VAR_4))
  return 0;
 if (VAR_1->sa_family != VAR_0->af || VAR_2->sa_family != VAR_0->af)
  return 0;
 if (VAR_1->sa_len != VAR_0->src.ss_len || VAR_2->sa_len != VAR_0->dst.ss_len)
  return 0;

 VAR_9 = 0;

 VAR_6 = (const u_int8_t *)VAR_1;
 VAR_7 = (const u_int8_t *)&VAR_0->srcmask;
 VAR_8 = (u_int8_t *)&VAR_3;
 for (VAR_5 = 0 ; VAR_5 < VAR_1->sa_len; VAR_5++) {
  VAR_8[VAR_5] = VAR_6[VAR_5] & VAR_7[VAR_5];

  VAR_9 += (VAR_7[VAR_5] ? 8 : 0);
 }

 VAR_6 = (const u_int8_t *)VAR_2;
 VAR_7 = (const u_int8_t *)&VAR_0->dstmask;
 VAR_8 = (u_int8_t *)&VAR_4;
 for (VAR_5 = 0 ; VAR_5 < VAR_2->sa_len; VAR_5++) {
  VAR_8[VAR_5] = VAR_6[VAR_5] & VAR_7[VAR_5];

  VAR_9 += (VAR_7[VAR_5] ? 8 : 0);
 }


 VAR_3.ss_len = VAR_1->sa_len;
 VAR_3.ss_family = VAR_1->sa_family;
 VAR_4.ss_len = VAR_2->sa_len;
 VAR_4.ss_family = VAR_2->sa_family;

 if (FUNC_0(&VAR_3, &VAR_0->src, VAR_0->src.ss_len) == 0 &&
     FUNC_0(&VAR_4, &VAR_0->dst, VAR_0->dst.ss_len) == 0) {
  return VAR_9;
 } else
  return 0;
}
