
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {scalar_t__ top_n; scalar_t__ structs; int features; scalar_t__ level; scalar_t__ min_eigen; scalar_t__ min_forward_backward_error; scalar_t__ bad_patches; scalar_t__ interval; int shift; int validate_set; double nnc_same; double nnc_thres; double nnc_verify; double nnc_beyond; double nnc_collect; scalar_t__ new_deform; scalar_t__ track_deform; scalar_t__ new_deform_angle; scalar_t__ track_deform_angle; scalar_t__ new_deform_scale; scalar_t__ track_deform_scale; scalar_t__ new_deform_shift; scalar_t__ track_deform_shift; scalar_t__ rotation; TYPE_1__ win_size; } ;
typedef TYPE_2__ ccv_tld_param_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(ccv_tld_param_t VAR_0)
{
 FUNC_0(VAR_0.top_n > 0);
 FUNC_0(VAR_0.structs > 0);
 FUNC_0(VAR_0.features > 0 && VAR_0.features <= 32);
 FUNC_0(VAR_0.win_size.width > 0 && VAR_0.win_size.height > 0);
 FUNC_0((VAR_0.win_size.width & 1) == 1 && (VAR_0.win_size.height & 1) == 1);
 FUNC_0(VAR_0.level >= 0);
 FUNC_0(VAR_0.min_eigen > 0);
 FUNC_0(VAR_0.min_forward_backward_error > 0);
 FUNC_0(VAR_0.bad_patches > 0);
 FUNC_0(VAR_0.interval >= 0);
 FUNC_0(VAR_0.shift > 0 && VAR_0.shift < 1);
 FUNC_0(VAR_0.validate_set > 0 && VAR_0.validate_set < 1);
 FUNC_0(VAR_0.nnc_same > 0.5 && VAR_0.nnc_same < 1);
 FUNC_0(VAR_0.nnc_thres > 0.5 && VAR_0.nnc_thres < 1);
 FUNC_0(VAR_0.nnc_verify > 0.5 && VAR_0.nnc_verify < 1);
 FUNC_0(VAR_0.nnc_beyond > 0.5 && VAR_0.nnc_beyond < 1);
 FUNC_0(VAR_0.nnc_collect >= 0.5 && VAR_0.nnc_collect < 1);
 FUNC_0(VAR_0.new_deform > 0);
 FUNC_0(VAR_0.track_deform > 0);
 FUNC_0(VAR_0.new_deform_angle > 0);
 FUNC_0(VAR_0.track_deform_angle > 0);
 FUNC_0(VAR_0.new_deform_scale > 0);
 FUNC_0(VAR_0.track_deform_scale > 0);
 FUNC_0(VAR_0.new_deform_shift > 0);
 FUNC_0(VAR_0.track_deform_shift > 0);
 FUNC_0(VAR_0.rotation >= 0);
}
