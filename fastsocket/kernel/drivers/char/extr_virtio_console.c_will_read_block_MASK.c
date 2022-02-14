
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {scalar_t__ host_connected; int guest_connected; } ;


 int FUNC_0 (struct port*) ;

__attribute__((used)) static bool FUNC_1(struct port *VAR_0)
{
 if (!VAR_0->guest_connected) {

  return 0;
 }
 return !FUNC_0(VAR_0) && VAR_0->host_connected;
}
