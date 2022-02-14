
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; } ;
struct TYPE_2__ {int cursor_y; int cursor_x; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_7, const unsigned short *VAR_8,
    int VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12 = 0;

    if (VAR_6 || VAR_2)
     return;

    if (VAR_7->vc_mode != VAR_1)
         return;
    while (VAR_9--) {
 FUNC_2(VAR_4, FUNC_1(VAR_8++), VAR_10, VAR_11++);
    }

    if (VAR_12)
     VAR_5 = VAR_0;
}
