
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct count_info {int ptr; } ;
struct TYPE_4__ {int samplebits; } ;
struct TYPE_3__ {int string; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int ,int ,struct count_info*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_4(void)
{
 struct count_info VAR_5;

 if (!VAR_3) return 0;

 if (FUNC_2(VAR_1, VAR_0, &VAR_5) == -1) {
  FUNC_3(VAR_4->string);
  FUNC_0("Uh, sound dead.\n");
  FUNC_1(VAR_1);
  VAR_3 = 0;
  return 0;
 }
 return VAR_5.ptr / (VAR_2.samplebits / 8);
}
