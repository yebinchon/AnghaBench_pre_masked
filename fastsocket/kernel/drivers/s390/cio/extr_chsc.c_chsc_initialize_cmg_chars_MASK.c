
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cmg_chars {int * values; } ;
struct channel_path {int cmg; struct cmg_chars* cmg_chars; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmg_chars* FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct channel_path *VAR_2, u8 VAR_3,
     struct cmg_chars *VAR_4)
{
 switch (VAR_2->cmg) {
 case 2:
 case 3:
  VAR_2->cmg_chars = FUNC_0(sizeof(struct cmg_chars),
      VAR_0);
  if (VAR_2->cmg_chars) {
   int VAR_5, VAR_6;
   struct cmg_chars *VAR_7;

   VAR_7 = VAR_2->cmg_chars;
   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
    VAR_6 = 0x80 >> (VAR_5 + 3);
    if (VAR_3 & VAR_6)
     VAR_7->values[VAR_5] = VAR_4->values[VAR_5];
    else
     VAR_7->values[VAR_5] = 0;
   }
  }
  break;
 default:

  break;
 }
}
