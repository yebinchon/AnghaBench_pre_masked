
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int*) ;

__attribute__((used)) static kern_return_t
FUNC_2(void *VAR_5) {
 int VAR_6 = VAR_3 | VAR_1;
 kern_return_t VAR_7;
 VAR_7 = FUNC_1(VAR_4, (vm_offset_t) VAR_5, VAR_2, &VAR_6);

 FUNC_0(VAR_7 == VAR_0);

 return VAR_7;
}
