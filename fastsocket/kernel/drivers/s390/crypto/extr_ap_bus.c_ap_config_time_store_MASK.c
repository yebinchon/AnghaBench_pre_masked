
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bus_type {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_5__ {scalar_t__ expires; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static ssize_t FUNC_4(struct bus_type *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 int VAR_8;

 if (FUNC_2(VAR_6, "%d\n", &VAR_8) != 1 || VAR_8 < 5 || VAR_8 > 120)
  return -VAR_0;
 VAR_2 = VAR_8;
 if (!FUNC_3(&VAR_3) ||
     !FUNC_1(&VAR_3, VAR_4 + VAR_2 * VAR_1)) {
  VAR_3.expires = VAR_4 + VAR_2 * VAR_1;
  FUNC_0(&VAR_3);
 }
 return VAR_7;
}
