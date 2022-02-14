
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int kauth_cred_t ;
typedef int errno_t ;
typedef int daddr64_t ;
typedef int buf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static errno_t
FUNC_3(vnode_t VAR_1, daddr64_t VAR_2, int VAR_3, daddr64_t *VAR_4, int *VAR_5,
     int VAR_6, kauth_cred_t VAR_7, buf_t *VAR_8, int VAR_9)
{
 buf_t VAR_10;
 int VAR_11;

 VAR_10 = *VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7, 0, VAR_9);




 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {

  if (FUNC_2(VAR_1, VAR_4[VAR_11]))
   continue;


  (void) FUNC_0(VAR_1, VAR_4[VAR_11], VAR_5[VAR_11], VAR_7, VAR_0, VAR_9);
 }


 return (FUNC_1(VAR_10));
}
