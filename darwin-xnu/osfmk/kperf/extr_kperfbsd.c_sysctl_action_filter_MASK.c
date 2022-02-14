
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sysctl_req {scalar_t__ newptr; scalar_t__ oldptr; } ;
typedef int mach_port_name_t ;
typedef int inputs ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (int*,scalar_t__,int) ;
 int FUNC_3 (unsigned int,int*) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct sysctl_req *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;
 uint64_t VAR_5[2] = {};

 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_2->newptr == VAR_1) {
  return VAR_0;
 }

 if ((VAR_4 = FUNC_1(VAR_2->newptr, VAR_5, sizeof(VAR_5)))) {
  return VAR_4;
 }

 unsigned int VAR_6 = (unsigned int)VAR_5[0];
 int VAR_7 = (int)VAR_5[1];

 if (VAR_2->oldptr != VAR_1) {
  int VAR_8;
  if ((VAR_4 = FUNC_3(VAR_6, &VAR_8))) {
   return VAR_4;
  }

  VAR_5[1] = VAR_8;
  return FUNC_2(VAR_5, VAR_2->oldptr, sizeof(VAR_5));
 } else {
  int VAR_9 = VAR_3 ? FUNC_5((mach_port_name_t)VAR_7)
    : VAR_7;

  return FUNC_4(VAR_6, VAR_9);
 }
}
