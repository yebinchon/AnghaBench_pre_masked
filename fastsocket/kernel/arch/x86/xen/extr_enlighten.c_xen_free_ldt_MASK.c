
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_struct {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct desc_struct*,int ) ;

__attribute__((used)) static void FUNC_1(struct desc_struct *VAR_3, unsigned VAR_4)
{
 const unsigned VAR_5 = VAR_2 / VAR_0;
 int VAR_6;

 for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += VAR_5)
  FUNC_0(VAR_3 + VAR_6, VAR_1);
}
