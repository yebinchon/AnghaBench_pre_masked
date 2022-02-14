
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ is_em2800; } ;
struct em28xx {TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct em28xx*,int ,int,int) ;
 int FUNC_1 (struct em28xx*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_3, u16 VAR_4, u16 VAR_5)
{
 u8 VAR_6;


 if (VAR_3->board.is_em2800) {
  VAR_6 = (VAR_5 ? 0x20 : 0x00) | (VAR_4 ? 0x10 : 0x00);
 } else {
  u8 VAR_7[2];

  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_4 >> 8;
  FUNC_1(VAR_3, VAR_1, (char *)VAR_7, 2);

  VAR_7[0] = VAR_5;
  VAR_7[1] = VAR_5 >> 8;
  FUNC_1(VAR_3, VAR_2, (char *)VAR_7, 2);


  VAR_6 = (VAR_4 || VAR_5) ? 0x30 : 0x00;
 }
 return FUNC_0(VAR_3, VAR_0, VAR_6, 0x30);
}
