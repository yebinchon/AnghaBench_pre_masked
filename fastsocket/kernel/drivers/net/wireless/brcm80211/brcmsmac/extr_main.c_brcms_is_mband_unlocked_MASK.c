
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {int bandlocked; TYPE_1__* pub; } ;
struct TYPE_2__ {int _nbands; } ;



__attribute__((used)) static bool FUNC_0(struct brcms_c_info *VAR_0)
{
 return VAR_0->pub->_nbands > 1 && !VAR_0->bandlocked;
}
