
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long target_pages; scalar_t__ balloon_high; scalar_t__ balloon_low; scalar_t__ current_pages; } ;


 TYPE_1__ VAR_0 ;
 unsigned long FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(void)
{
 unsigned long VAR_1 = VAR_0.target_pages;

 VAR_1 = FUNC_0(VAR_1,
       VAR_0.current_pages +
       VAR_0.balloon_low +
       VAR_0.balloon_high);

 return VAR_1;
}
