
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_nodeid; } ;
struct TYPE_4__ {TYPE_1__ m_header; int m_flags; int m_result; int m_type; } ;
struct dlm_ls {TYPE_2__ ls_stub_ms; } ;
struct dlm_lkb {scalar_t__ lkb_grmode; scalar_t__ lkb_rqmode; int lkb_flags; int lkb_resource; int lkb_nodeid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dlm_lkb*,TYPE_2__*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 scalar_t__ FUNC_2 (struct dlm_lkb*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct dlm_lkb*) ;

__attribute__((used)) static void FUNC_5(struct dlm_ls *VAR_5, struct dlm_lkb *VAR_6)
{
 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_6);
  VAR_5->ls_stub_ms.m_type = VAR_2;
  VAR_5->ls_stub_ms.m_result = -VAR_3;
  VAR_5->ls_stub_ms.m_flags = VAR_6->lkb_flags;
  VAR_5->ls_stub_ms.m_header.h_nodeid = VAR_6->lkb_nodeid;
  FUNC_0(VAR_6, &VAR_5->ls_stub_ms);


  VAR_6->lkb_grmode = VAR_1;
  FUNC_3(VAR_6->lkb_resource, VAR_4);
  FUNC_4(VAR_6);

 } else if (VAR_6->lkb_rqmode >= VAR_6->lkb_grmode) {
  VAR_6->lkb_flags |= VAR_0;
 }



}
