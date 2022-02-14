
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int filename; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__,int ,int ,int*,int*,int*) ;
 TYPE_1__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_3(void)
{
 if (VAR_4 != VAR_0 && VAR_16 == 2) {
  FUNC_1(VAR_4 == VAR_1 ? 0x800 : 0x2000);
  VAR_5 = -1;
 }
 else {
  int VAR_17, VAR_18;
  FUNC_2(VAR_4, VAR_11, VAR_6, &VAR_5, &VAR_17, &VAR_18);
  if (VAR_5 == -1
      || !FUNC_0(VAR_14[VAR_5].filename, VAR_10, VAR_14[VAR_5].size)) {

   VAR_5 = -1;
   if (VAR_4 != VAR_0 && VAR_16 == 1)
    FUNC_1(VAR_4 == VAR_1 ? 0x800 : 0x2000);
   else

    return VAR_7;
  }
  else if (VAR_4 != VAR_0) {

   VAR_9 = VAR_17 != -1 && FUNC_0(VAR_14[VAR_17].filename, VAR_8, VAR_14[VAR_17].size);
   if (!VAR_9)

    VAR_2 = VAR_7;

   if (VAR_3) {

    if (VAR_18 == -1
        || !FUNC_0(VAR_14[VAR_18].filename, VAR_13, VAR_14[VAR_18].size))

     VAR_3 = VAR_7;
   }
  }
 }

 VAR_12 = 0;
 return VAR_15;
}
