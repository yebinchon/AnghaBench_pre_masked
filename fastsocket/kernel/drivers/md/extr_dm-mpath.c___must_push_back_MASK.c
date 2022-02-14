
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {scalar_t__ queue_if_no_path; scalar_t__ saved_queue_if_no_path; int ti; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct multipath *VAR_0)
{
 return (VAR_0->queue_if_no_path != VAR_0->saved_queue_if_no_path &&
  FUNC_0(VAR_0->ti));
}
