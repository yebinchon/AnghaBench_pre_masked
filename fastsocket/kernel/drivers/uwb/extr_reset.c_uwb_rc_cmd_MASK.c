
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rceb {int wEvent; int bEventType; } ;
struct uwb_rccb {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct uwb_rc*,char const*,struct uwb_rccb*,size_t,struct uwb_rceb*,size_t,int ,int ,int *) ;
 int FUNC_1 (struct device*,char*,char const*,size_t,size_t) ;

ssize_t FUNC_2(struct uwb_rc *VAR_1, const char *VAR_2,
     struct uwb_rccb *VAR_3, size_t VAR_4,
     struct uwb_rceb *VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = &VAR_1->uwb_dev.dev;
 ssize_t VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2,
         VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_5->bEventType, VAR_5->wEvent, ((void*)0));

 if (VAR_8 > 0 && VAR_8 < VAR_6) {
  FUNC_1(VAR_7, "%s: not enough data returned for decoding reply "
   "(%zu bytes received vs at least %zu needed)\n",
   VAR_2, VAR_8, VAR_6);
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
