
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {size_t index; } ;
struct file {int dummy; } ;
typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_4__ {int pMyBord; int dataSetOut; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int ,TYPE_1__*,int,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_11, struct file *VAR_12,
   unsigned int VAR_13, unsigned int VAR_14)
{
 i2ChanStrPtr VAR_15 = VAR_4[VAR_11->index];

 if (VAR_15 == ((void*)0))
  return -VAR_5;

 if (VAR_13 & VAR_10) {
  FUNC_0(VAR_8, VAR_15, 100, 1, VAR_3);
  VAR_15->dataSetOut |= VAR_7;
 }
 if (VAR_13 & VAR_9) {
  FUNC_0(VAR_8, VAR_15, 100, 1, VAR_1);
  VAR_15->dataSetOut |= VAR_6;
 }

 if (VAR_14 & VAR_10) {
  FUNC_0(VAR_8, VAR_15, 100, 1, VAR_2);
  VAR_15->dataSetOut &= ~VAR_7;
 }
 if (VAR_14 & VAR_9) {
  FUNC_0(VAR_8, VAR_15, 100, 1, VAR_0);
  VAR_15->dataSetOut &= ~VAR_6;
 }
 FUNC_1( VAR_15->pMyBord );
 return 0;
}
