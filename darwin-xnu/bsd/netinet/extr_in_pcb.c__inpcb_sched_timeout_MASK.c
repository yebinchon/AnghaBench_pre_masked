
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned int,int ,int *) ;
 int FUNC_2 (int,int ,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(unsigned int VAR_12)
{
 uint64_t VAR_13, VAR_14;

 FUNC_2(1, VAR_2, &VAR_13);
 FUNC_0(&VAR_10, VAR_1);
 if (VAR_11 == 0 &&
     (VAR_7 || VAR_9)) {
  FUNC_3(&VAR_10);
  VAR_11++;
  if (VAR_12 == 0) {
   VAR_6 = VAR_4;
   FUNC_4(VAR_8,
       VAR_13);
  } else {
   VAR_6 = VAR_0;
   FUNC_1(VAR_12,
       VAR_2, &VAR_14);
   FUNC_5(
       VAR_8, ((void*)0), VAR_13, VAR_14,
       VAR_3);
  }
 } else if (VAR_11 == 1 &&
     VAR_12 == 0 && !VAR_6) {





  FUNC_3(&VAR_10);
  VAR_11++;
  VAR_6 = VAR_4;
  FUNC_4(VAR_5, VAR_13);
 }
}
