
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {int (* hide_cursor ) (unsigned int,unsigned int) ;int (* paint_char ) (unsigned int,unsigned int,unsigned char,unsigned char,int ,int ) ;} ;


 int FUNC_0 (unsigned char,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned char VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned char,unsigned char,int ,int ) ;
 int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_4(unsigned int VAR_9, unsigned int VAR_10)
{
 if ( VAR_9 < VAR_5 && VAR_10 < VAR_6 )
 {
  uint32_t VAR_11 = (VAR_10 * VAR_5) + VAR_9;
  unsigned char VAR_12 = VAR_2[VAR_11];
  unsigned char VAR_13 = VAR_3[VAR_11];
  unsigned char VAR_14 = VAR_4[VAR_11];
  unsigned char VAR_15 = VAR_7;

  FUNC_1(FUNC_0(VAR_14, VAR_1 ), VAR_1 );
  FUNC_1(FUNC_0(VAR_14, VAR_0), VAR_0);

  VAR_8.paint_char(VAR_9, VAR_10, VAR_13, VAR_12, 0, 0);

  FUNC_1(FUNC_0(VAR_15, VAR_1 ), VAR_1 );
  FUNC_1(FUNC_0(VAR_15, VAR_0), VAR_0);
 }
 else
 {
  VAR_8.hide_cursor(VAR_9, VAR_10);
 }
}
