
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_device {int status; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct ide_device *VAR_3) {
    VAR_3->status = VAR_2 | VAR_1;
    VAR_3->error = VAR_0;
}
