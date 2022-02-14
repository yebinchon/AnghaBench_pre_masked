
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr {int dummy; } ;
struct rtentry {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct rtentry* FUNC_3 (struct sockaddr*,int,int ,unsigned int) ;

struct rtentry *
FUNC_4(struct sockaddr *VAR_2, int VAR_3, uint32_t VAR_4,
    unsigned int VAR_5)
{
 struct rtentry *VAR_6;
 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1);
 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_1);
 return (VAR_6);
}
