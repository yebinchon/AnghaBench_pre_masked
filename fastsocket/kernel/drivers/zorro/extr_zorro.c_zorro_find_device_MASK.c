
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zorro_id ;
struct zorro_dev {scalar_t__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct zorro_dev* VAR_3 ;
 int VAR_4 ;

struct zorro_dev *FUNC_1(zorro_id VAR_5, struct zorro_dev *VAR_6)
{
    struct zorro_dev *VAR_7;

    if (!VAR_0 || !FUNC_0(VAR_1))
 return ((void*)0);

    for (VAR_7 = VAR_6 ? VAR_6+1 : &VAR_3[0];
  VAR_7 < VAR_3+VAR_4;
  VAR_7++)
 if (VAR_5 == VAR_2 || VAR_5 == VAR_7->id)
     return VAR_7;
    return ((void*)0);
}
