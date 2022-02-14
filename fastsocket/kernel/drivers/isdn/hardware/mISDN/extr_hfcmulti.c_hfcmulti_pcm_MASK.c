
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfc_multi {TYPE_1__* chan; } ;
struct TYPE_2__ {int protocol; } ;


 int FUNC_0 (struct hfc_multi*,int,int ,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct hfc_multi *VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5)
{
 if (VAR_4 < 0 || VAR_4 < 0 || VAR_3 < 0 || VAR_5 < 0) {

  FUNC_0(VAR_0, VAR_1, VAR_0->chan[VAR_1].protocol, -1, 0, -1, 0);
  return;
 }


 FUNC_0(VAR_0, VAR_1, VAR_0->chan[VAR_1].protocol, VAR_2, VAR_3,
  VAR_4, VAR_5);
}
