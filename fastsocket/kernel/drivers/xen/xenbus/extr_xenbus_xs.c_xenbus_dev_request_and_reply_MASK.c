
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsd_sockmsg {scalar_t__ type; scalar_t__ len; } ;
struct TYPE_2__ {int transaction_mutex; int request_mutex; } ;


 void* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xsd_sockmsg*,scalar_t__) ;
 TYPE_1__ VAR_3 ;

void *FUNC_7(struct xsd_sockmsg *VAR_4)
{
 void *VAR_5;
 struct xsd_sockmsg VAR_6 = *VAR_4;
 int VAR_7;

 if (VAR_6.type == VAR_2)
  FUNC_1(&VAR_3.transaction_mutex);

 FUNC_2(&VAR_3.request_mutex);

 VAR_7 = FUNC_6(VAR_4, sizeof(*VAR_4) + VAR_4->len);
 if (VAR_7) {
  VAR_4->type = VAR_0;
  VAR_5 = FUNC_0(VAR_7);
 } else
  VAR_5 = FUNC_4(&VAR_4->type, &VAR_4->len);

 FUNC_3(&VAR_3.request_mutex);

 if ((VAR_4->type == VAR_1) ||
     ((VAR_6.type == VAR_2) &&
      (VAR_4->type == VAR_0)))
  FUNC_5(&VAR_3.transaction_mutex);

 return VAR_5;
}
