
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int ro_mode; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(struct ubi_device *VAR_0)
{
 if (!VAR_0->ro_mode) {
  VAR_0->ro_mode = 1;
  FUNC_0("switch to read-only mode");
 }
}
