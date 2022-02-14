
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_device {int select; } ;



__attribute__((used)) static void FUNC_0(struct ide_device *VAR_0) {
    VAR_0->select &= ~(1<<7);
}
