
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int*) ;

__attribute__((used)) static kern_return_t
FUNC_2(void *VAR_4) {
 int VAR_5 = VAR_1;
 kern_return_t VAR_6 = FUNC_1(VAR_3, (vm_offset_t) VAR_4, VAR_2, &VAR_5);

 FUNC_0(VAR_6 == VAR_0);
 return VAR_6;
}
