
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct sysctl_req {scalar_t__ newptr; scalar_t__ oldptr; } ;
typedef int inputs ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__,int) ;
 int FUNC_3 (unsigned int,scalar_t__*) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct sysctl_req *VAR_2)
{
 int VAR_3;
 uint64_t VAR_4[2] = {};

 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_2->newptr == VAR_1) {
  return VAR_0;
 }

 if ((VAR_3 = FUNC_1(VAR_2->newptr, VAR_4, sizeof(VAR_4)))) {
  return VAR_3;
 }

 unsigned int VAR_5 = (unsigned int)VAR_4[0];
 uint64_t VAR_6 = VAR_4[1];

 if (VAR_2->oldptr != VAR_1) {
  uint64_t VAR_7 = 0;
  if ((VAR_3 = FUNC_3(VAR_5, &VAR_7))) {
   return VAR_3;
  }

  VAR_4[1] = VAR_7;

  return FUNC_2(VAR_4, VAR_2->oldptr, sizeof(VAR_4));
 } else {
  return FUNC_4(VAR_5, VAR_6);
 }
}
