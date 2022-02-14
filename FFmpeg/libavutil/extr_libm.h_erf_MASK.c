
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double const*) ;
 double FUNC_1 (double) ;
 double const FUNC_2 (double const*,int ,int) ;

__attribute__((used)) static inline double FUNC_3(double VAR_0)
{



    double VAR_1;


    if (VAR_0 < 0)
        return -FUNC_3(-VAR_0);


    if (VAR_0 == 0)
        return 0;
    else if (VAR_0 < 1e-10)
        return VAR_0 * 1.125 + VAR_0 * 0.003379167095512573896158903121545171688;
    else if (VAR_0 < 0.5) {





        static const double VAR_2 = 1.044948577880859375;
        static const double VAR_3[] = {
            0.0834305892146531832907,
            -0.338165134459360935041,
            -0.0509990735146777432841,
            -0.00772758345802133288487,
            -0.000322780120964605683831,
        };
        static const double VAR_4[] = {
            1,
            0.455004033050794024546,
            0.0875222600142252549554,
            0.00858571925074406212772,
            0.000370900071787748000569,
        };
        double VAR_5 = VAR_0 * VAR_0;
        return VAR_0 * (VAR_2 + FUNC_2(VAR_3, (sizeof(VAR_3) / sizeof((VAR_3)[0])), VAR_5) / FUNC_2(VAR_4, (sizeof(VAR_4) / sizeof((VAR_4)[0])), VAR_5));
    }

    else if (VAR_0 < 1.5) {




        static const double VAR_6 = 0.405935764312744140625;
        static const double VAR_7[] = {
            -0.098090592216281240205,
            0.178114665841120341155,
            0.191003695796775433986,
            0.0888900368967884466578,
            0.0195049001251218801359,
            0.00180424538297014223957,
        };
        static const double VAR_8[] = {
            1,
            1.84759070983002217845,
            1.42628004845511324508,
            0.578052804889902404909,
            0.12385097467900864233,
            0.0113385233577001411017,
            0.337511472483094676155e-5,
        };
        VAR_1 = VAR_6 + FUNC_2(VAR_7, (sizeof(VAR_7) / sizeof((VAR_7)[0])), VAR_0 - 0.5) / FUNC_2(VAR_8, (sizeof(VAR_8) / sizeof((VAR_8)[0])), VAR_0 - 0.5);
        VAR_1 *= FUNC_1(-VAR_0 * VAR_0) / VAR_0;
        return 1 - VAR_1;
    }
    else if (VAR_0 < 2.5) {




        static const double VAR_9 = 0.50672817230224609375;
        static const double VAR_10[] = {
            -0.0243500476207698441272,
            0.0386540375035707201728,
            0.04394818964209516296,
            0.0175679436311802092299,
            0.00323962406290842133584,
            0.000235839115596880717416,
        };
        static const double VAR_11[] = {
            1,
            1.53991494948552447182,
            0.982403709157920235114,
            0.325732924782444448493,
            0.0563921837420478160373,
            0.00410369723978904575884,
        };
        VAR_1 = VAR_9 + FUNC_2(VAR_10, (sizeof(VAR_10) / sizeof((VAR_10)[0])), VAR_0 - 1.5) / FUNC_2(VAR_11, (sizeof(VAR_11) / sizeof((VAR_11)[0])), VAR_0 - 1.5);
        VAR_1 *= FUNC_1(-VAR_0 * VAR_0) / VAR_0;
        return 1 - VAR_1;
    }
    else if (VAR_0 < 4.5) {




        static const double VAR_12 = 0.5405750274658203125;
        static const double VAR_13[] = {
            0.00295276716530971662634,
            0.0137384425896355332126,
            0.00840807615555585383007,
            0.00212825620914618649141,
            0.000250269961544794627958,
            0.113212406648847561139e-4,
        };
        static const double VAR_14[] = {
            1,
            1.04217814166938418171,
            0.442597659481563127003,
            0.0958492726301061423444,
            0.0105982906484876531489,
            0.000479411269521714493907,
        };
        VAR_1 = VAR_12 + FUNC_2(VAR_13, (sizeof(VAR_13) / sizeof((VAR_13)[0])), VAR_0 - 3.5) / FUNC_2(VAR_14, (sizeof(VAR_14) / sizeof((VAR_14)[0])), VAR_0 - 3.5);
        VAR_1 *= FUNC_1(-VAR_0 * VAR_0) / VAR_0;
        return 1 - VAR_1;
    }



    else if (VAR_0 < 5.92) {




        static const double VAR_15 = 0.5579090118408203125;
        static const double VAR_16[] = {
            0.00628057170626964891937,
            0.0175389834052493308818,
            -0.212652252872804219852,
            -0.687717681153649930619,
            -2.5518551727311523996,
            -3.22729451764143718517,
            -2.8175401114513378771,
        };
        static const double VAR_17[] = {
            1,
            2.79257750980575282228,
            11.0567237927800161565,
            15.930646027911794143,
            22.9367376522880577224,
            13.5064170191802889145,
            5.48409182238641741584,
        };
        VAR_1 = VAR_15 + FUNC_2(VAR_16, (sizeof(VAR_16) / sizeof((VAR_16)[0])), 1 / VAR_0) / FUNC_2(VAR_17, (sizeof(VAR_17) / sizeof((VAR_17)[0])), 1 / VAR_0);
        VAR_1 *= FUNC_1(-VAR_0 * VAR_0) / VAR_0;
        return 1 - VAR_1;
    }

    else if (VAR_0 != VAR_0)
        return VAR_0;

    else
        return 1;
}
