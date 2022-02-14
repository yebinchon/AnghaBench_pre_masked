
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,char*) ;

__attribute__((used)) static inline void FUNC_1(struct comedi_device *VAR_0)
{
 FUNC_0(VAR_0,
       "AO command and AI external channel queue cannot be used simultaneously.");
 FUNC_0(VAR_0,
       "Use internal AI channel queue (channels must be consecutive and use same range/aref)");
}
