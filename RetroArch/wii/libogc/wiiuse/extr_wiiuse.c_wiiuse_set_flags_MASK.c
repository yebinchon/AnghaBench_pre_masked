
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_t {int flags; } ;



int FUNC_0(struct wiimote_t* VAR_0, int VAR_1, int VAR_2) {
 if (!VAR_0) return 0;


 VAR_1 &= ~VAR_2;
 VAR_2 &= ~VAR_1;

 VAR_0->flags |= VAR_1;
 VAR_0->flags &= ~VAR_2;

 return VAR_0->flags;
}
