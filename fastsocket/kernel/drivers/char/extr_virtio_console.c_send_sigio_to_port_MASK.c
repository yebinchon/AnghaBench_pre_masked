
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {scalar_t__ async_queue; scalar_t__ guest_connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct port *VAR_2)
{
 if (VAR_2->async_queue && VAR_2->guest_connected)
  FUNC_0(&VAR_2->async_queue, VAR_1, VAR_0);
}
