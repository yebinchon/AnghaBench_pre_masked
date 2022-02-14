
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int deviceSupportsGamma; } ;
struct TYPE_3__ {int (* Printf ) (int ,char*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_3()
{




  VAR_4.deviceSupportsGamma = VAR_5;

  if (VAR_12)
  {
    if (VAR_10 < 2 ||
        (VAR_10 == 2 && VAR_11 < 0)) {
      VAR_7.Printf( VAR_2, "XF86 Gamma extension not supported in this version\n");
      return;
    }
    FUNC_0(VAR_3, VAR_8, &VAR_9);
    VAR_7.Printf( VAR_2, "XF86 Gamma extension initialized\n");
    VAR_4.deviceSupportsGamma = VAR_6;
  }
}
