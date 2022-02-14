
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_struct {scalar_t__ io_port; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct esp_struct *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->io_port + VAR_1);
}
