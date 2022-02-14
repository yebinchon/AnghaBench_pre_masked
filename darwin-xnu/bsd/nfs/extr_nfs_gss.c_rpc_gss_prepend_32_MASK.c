
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mbuf_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static errno_t
FUNC_5(mbuf_t *VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 uint32_t *VAR_5;
 VAR_4 = FUNC_2(VAR_2, sizeof(uint32_t), VAR_1);
 if (VAR_4)
  return (VAR_4);

 VAR_5 = FUNC_0(*VAR_2);
 *VAR_5 = FUNC_4(VAR_3);

 return (0);
}
