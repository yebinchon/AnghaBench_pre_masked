
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct bufhashhdr {int dummy; } ;
typedef int daddr64_t ;
typedef int boolean_t ;


 struct bufhashhdr* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,struct bufhashhdr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static boolean_t
FUNC_4(vnode_t VAR_3, daddr64_t VAR_4)
{
        boolean_t VAR_5;
 struct bufhashhdr *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4);

 FUNC_2(VAR_2);

 if (FUNC_1(VAR_3, VAR_4, VAR_6))
         VAR_5 = VAR_1;
 else
         VAR_5 = VAR_0;
 FUNC_3(VAR_2);

 return (VAR_5);
}
