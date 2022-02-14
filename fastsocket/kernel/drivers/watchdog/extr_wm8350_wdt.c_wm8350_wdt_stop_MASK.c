
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct wm8350*) ;
 int FUNC_3 (struct wm8350*,int ) ;
 int FUNC_4 (struct wm8350*) ;
 int FUNC_5 (struct wm8350*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct wm8350 *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 FUNC_0(&VAR_2);
 FUNC_4(VAR_3);

 VAR_5 = FUNC_3(VAR_3, VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_4 = FUNC_5(VAR_3, VAR_0, VAR_5);

 FUNC_2(VAR_3);
 FUNC_1(&VAR_2);

 return VAR_4;
}
