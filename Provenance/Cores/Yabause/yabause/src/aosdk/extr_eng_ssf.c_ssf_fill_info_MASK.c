
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_4__ {int * info; int * title; } ;
typedef TYPE_1__ ao_display_info ;
struct TYPE_5__ {char* inf_title; char* inf_game; char* inf_artist; char* inf_copy; char* inf_year; char* inf_length; char* inf_fade; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*) ;

s32 FUNC_2(ao_display_info *VAR_4)
{
 if (VAR_2 == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_4->title[1], "Name: ");
 FUNC_0(VAR_4->info[1], "%s", VAR_2->inf_title);

 FUNC_1(VAR_4->title[2], "Game: ");
 FUNC_0(VAR_4->info[2], "%s", VAR_2->inf_game);

 FUNC_1(VAR_4->title[3], "Artist: ");
 FUNC_0(VAR_4->info[3], "%s", VAR_2->inf_artist);

 FUNC_1(VAR_4->title[4], "Copyright: ");
 FUNC_0(VAR_4->info[4], "%s", VAR_2->inf_copy);

 FUNC_1(VAR_4->title[5], "Year: ");
 FUNC_0(VAR_4->info[5], "%s", VAR_2->inf_year);

 FUNC_1(VAR_4->title[6], "Length: ");
 FUNC_0(VAR_4->info[6], "%s", VAR_2->inf_length);

 FUNC_1(VAR_4->title[7], "Fade: ");
 FUNC_0(VAR_4->info[7], "%s", VAR_2->inf_fade);

 FUNC_1(VAR_4->title[8], "Ripper: ");
 FUNC_0(VAR_4->info[8], "%s", VAR_3);

 return VAR_1;
}
