
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {unsigned long fwcapinfo; scalar_t__ dnld_sent; int waitq; int driver_lock; int * cur_cmd; } ;
struct if_usb_card {struct lbs_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct if_usb_card*,char const*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct if_usb_card *VAR_8,
    const char *VAR_9, int VAR_10)
{
 struct lbs_private *VAR_11 = VAR_8->priv;
 unsigned long VAR_12, VAR_13;
 int VAR_14;

 VAR_13 = VAR_11->fwcapinfo;
 if (((VAR_10 == VAR_1) && !(VAR_13 & VAR_7)) ||
     ((VAR_10 == VAR_0) && !(VAR_13 & VAR_6)))
  return -VAR_4;


 FUNC_1(&VAR_11->driver_lock, VAR_12);
 while (VAR_11->cur_cmd != ((void*)0) || VAR_11->dnld_sent != VAR_3) {
  FUNC_2(&VAR_11->driver_lock, VAR_12);
  if (FUNC_3(VAR_11->waitq,
    (VAR_11->cur_cmd == ((void*)0) &&
    VAR_11->dnld_sent == VAR_3))) {
   return -VAR_5;
  }
  FUNC_1(&VAR_11->driver_lock, VAR_12);
 }
 VAR_11->dnld_sent = VAR_2;
 FUNC_2(&VAR_11->driver_lock, VAR_12);

 VAR_14 = FUNC_0(VAR_8, VAR_9, VAR_10);

 FUNC_1(&VAR_11->driver_lock, VAR_12);
 VAR_11->dnld_sent = VAR_3;
 FUNC_2(&VAR_11->driver_lock, VAR_12);

 FUNC_4(&VAR_11->waitq);

 return VAR_14;
}
