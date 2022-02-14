
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wm8350 {int (* read_dev ) (struct wm8350*,int,int,char*) ;int dev; } ;
struct TYPE_2__ {int readable; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct wm8350*,int,int,char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct wm8350 *VAR_1, u8 VAR_2, int VAR_3,
       u16 *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = VAR_3 * 2;

 FUNC_1(VAR_1->dev, "volatile read\n");
 VAR_6 = VAR_1->read_dev(VAR_1, VAR_2, VAR_7, (char *)VAR_4);

 for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_3; VAR_5++) {

  VAR_4[VAR_5 - VAR_2] = FUNC_0(VAR_4[VAR_5 - VAR_2]);


  VAR_4[VAR_5 - VAR_2] &= VAR_0[VAR_5].readable;
 }

 FUNC_2(VAR_3, VAR_4);

 return VAR_6;
}
