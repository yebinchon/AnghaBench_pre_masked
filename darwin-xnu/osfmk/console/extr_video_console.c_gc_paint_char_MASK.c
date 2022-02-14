
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {int (* paint_char ) (unsigned int,unsigned int,unsigned char,int,int ,int ) ;} ;


 int* VAR_0 ;
 unsigned char* VAR_1 ;
 int * VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned char,int,int ,int ) ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_7, unsigned int VAR_8, unsigned char VAR_9, int VAR_10)
{
 if ( VAR_7 < VAR_3 && VAR_8 < VAR_4 )
 {
  uint32_t VAR_11 = (VAR_8 * VAR_3) + VAR_7;

  VAR_0[VAR_11] = VAR_10;
  VAR_1[VAR_11] = VAR_9;
  VAR_2[VAR_11] = VAR_5;
 }

 VAR_6.paint_char(VAR_7, VAR_8, VAR_9, VAR_10, 0, 0);
}
