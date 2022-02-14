
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Uint32 ;
struct TYPE_6__ {char* international; } ;
struct TYPE_5__ {int ticks; int sem_sync; } ;
struct TYPE_4__ {int frames_rendered; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*,char*,int,char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static Uint32 FUNC_3(Uint32 VAR_4)
{
  FUNC_0(VAR_1.sem_sync);
  char VAR_5[100];
  VAR_1.ticks++;
  if (VAR_1.ticks == (VAR_3 ? 50 : 20))
  {
    int VAR_6 = VAR_3 ? (VAR_2.frames_rendered / 3) : VAR_2.frames_rendered;
    VAR_1.ticks = VAR_2.frames_rendered = 0;
    FUNC_2(VAR_5,"%d fps - %s ", VAR_6, VAR_0.international);
    FUNC_1(VAR_5, ((void*)0));
  }
  return VAR_4;
}
