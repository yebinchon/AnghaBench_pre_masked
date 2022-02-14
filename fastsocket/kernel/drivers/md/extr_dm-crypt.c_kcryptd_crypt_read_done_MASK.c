
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_crypt_io {int error; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_crypt_io*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct dm_crypt_io *VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_2 < 0))
  VAR_1->error = -VAR_0;

 FUNC_0(VAR_1);
}
