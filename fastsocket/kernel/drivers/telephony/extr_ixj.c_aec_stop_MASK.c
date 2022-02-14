
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rec_codec; scalar_t__ play_codec; int play_mode; int rec_mode; int aec_level; } ;
typedef TYPE_1__ IXJ ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(IXJ *VAR_3)
{
 VAR_3->aec_level = VAR_0;
 if (VAR_3->rec_codec == VAR_1 || VAR_3->play_codec == VAR_1 || VAR_3->rec_codec == VAR_2 || VAR_3->play_codec == VAR_2) {
  FUNC_0(0xE022, VAR_3);

  FUNC_0(0x0700, VAR_3);
 }
 if (VAR_3->play_mode != -1 && VAR_3->rec_mode != -1)
 {
  FUNC_0(0xB002, VAR_3);
 }
}
