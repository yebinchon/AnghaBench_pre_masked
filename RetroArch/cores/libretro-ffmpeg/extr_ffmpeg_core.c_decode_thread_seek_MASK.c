
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int ,scalar_t__,int ,int ) ;
 double VAR_7 ;
 double VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__* VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_4(double VAR_13)
{
   int VAR_14;
   int64_t VAR_15 = VAR_13 * VAR_0;

   if (VAR_15 < 0)
      VAR_15 = 0;

   VAR_8 = VAR_13;
   VAR_7 = VAR_13;

   VAR_14 = FUNC_2(VAR_9, -1, VAR_2, VAR_15, VAR_1, 0);
   if (VAR_14 < 0)
      FUNC_3(VAR_3, "av_seek_frame() failed.\n");

   if (VAR_4[VAR_6])
      FUNC_1(VAR_4[VAR_6]);
   if (VAR_12)
      FUNC_1(VAR_12);
   if (VAR_10[VAR_11])
      FUNC_1(VAR_10[VAR_11]);




}
