
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct device {char const* name; int running; struct device* next; scalar_t__ num_vq; scalar_t__ feature_len; int * vq; int desc; } ;
struct TYPE_2__ {struct device* lastdev; struct device* dev; } ;


 TYPE_1__ VAR_0 ;
 struct device* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct device *FUNC_2(const char *VAR_1, u16 VAR_2)
{
 struct device *VAR_3 = FUNC_0(sizeof(*VAR_3));


 VAR_3->desc = FUNC_1(VAR_2);
 VAR_3->name = VAR_1;
 VAR_3->vq = ((void*)0);
 VAR_3->feature_len = 0;
 VAR_3->num_vq = 0;
 VAR_3->running = 0;







 if (VAR_0.lastdev)
  VAR_0.lastdev->next = VAR_3;
 else
  VAR_0.dev = VAR_3;
 VAR_0.lastdev = VAR_3;

 return VAR_3;
}
