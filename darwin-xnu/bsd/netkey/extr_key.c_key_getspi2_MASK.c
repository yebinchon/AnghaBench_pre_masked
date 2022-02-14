
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; int sa_len; } ;
struct secasindex {int dst; int src; } ;
struct sadb_spirange {int dummy; } ;




 int FUNC_0 (int ,int ,int ,struct sockaddr*,struct sockaddr*,int ,struct secasindex*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct sadb_spirange*,struct secasindex*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

u_int32_t
FUNC_5(struct sockaddr *VAR_2,
   struct sockaddr *VAR_3,
   u_int8_t VAR_4,
   u_int8_t VAR_5,
   u_int32_t VAR_6,
   struct sadb_spirange *VAR_7)
{
 u_int32_t VAR_8;
 struct secasindex VAR_9;

 FUNC_1(VAR_1, VAR_0);


 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2, VAR_3, 0, &VAR_9);


 switch (((struct sockaddr *)&VAR_9.src)->sa_family) {
  case 129:
   if (((struct sockaddr *)&VAR_9.src)->sa_len != sizeof(struct sockaddr_in))
    return 0;
   ((struct sockaddr_in *)&VAR_9.src)->sin_port = 0;
   break;
  case 128:
   if (((struct sockaddr *)&VAR_9.src)->sa_len != sizeof(struct sockaddr_in6))
    return 0;
   ((struct sockaddr_in6 *)&VAR_9.src)->sin6_port = 0;
   break;
  default:
   ;
 }
 switch (((struct sockaddr *)&VAR_9.dst)->sa_family) {
  case 129:
   if (((struct sockaddr *)&VAR_9.dst)->sa_len != sizeof(struct sockaddr_in))
    return 0;
   ((struct sockaddr_in *)&VAR_9.dst)->sin_port = 0;
   break;
  case 128:
   if (((struct sockaddr *)&VAR_9.dst)->sa_len != sizeof(struct sockaddr_in6))
    return 0;
   ((struct sockaddr_in6 *)&VAR_9.dst)->sin6_port = 0;
   break;
  default:
   ;
 }

 FUNC_3(VAR_1);


 VAR_8 = FUNC_2(VAR_7, &VAR_9);

 FUNC_4(VAR_1);

 return VAR_8;
}
