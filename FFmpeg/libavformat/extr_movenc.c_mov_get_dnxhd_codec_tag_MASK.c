
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* par; } ;
struct TYPE_4__ {scalar_t__ profile; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char,char,char,char) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, MOVTrack *VAR_3)
{
  int VAR_4 = FUNC_0('A','V','d','n');
  if (VAR_3->par->profile != VAR_1 &&
      VAR_3->par->profile != VAR_0)
      VAR_4 = FUNC_0('A','V','d','h');
  return VAR_4;
}
